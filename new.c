            #include <stdio.h>

            int main() {
                int rows = 5;
                int i, j;
                
                for (i = rows; i > 0; i--) {
                    for (j = 0; j < i; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                return 0;
            }
