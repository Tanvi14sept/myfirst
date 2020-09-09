#include <stdio.h>
int a[100][100]; 
int rows,columns;

void clearField() {
    int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            a[i][j] = 0;
        }
    }
}

void setbound(int r, int c) {
    rows = r;
    columns = c;
}

int isInside(int i, int j) {
    return i >= 0 && i < rows && j >=0 && j < columns;
}

void increment(int i, int j) {
    if (isInside(i, j) && a[i][j] != -1) {
        ++a[i][j];
    }
}

void setmine(int i, int j) {
    a[i][j] = -1;
    
    int m,n;
    for (m = -1; m <= 1; m++) {
        for (n = -1; n <= 1; n++) {
            increment(i + m, j + n);
        }
    }
}

void printres(x) {
    printf("cases :%d\n", x);
    
    int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            int x = a[i][j];
            
            if (x == -1) { 
                printf("*");
            } else {
                printf("%d", x);
            }
        }
        printf("\n");
    }
}

int main() {
    int r, c; 
    int x = 1;
    
    for (;;) {
        scanf("%d %d", &r, &c);
        if (r == 0 && c == 0) {
            break;
        }
        
        setbound(r, c);
        clearField();
        
        int i;
        for (i = 0; i < r; i++) {
            char input[c + 1]; 
            scanf("%s", input);
            
            int j;
            for (j = 0; j < c; j++) {
                char currentChar = input[j];
                if (currentChar == '*') {
                    setmine(i, j);
                }
            }
        }
        
        if (x > 1) {
            printf("\n");
        }
        printres(x);
        ++x;
    }
    return 0;
}
