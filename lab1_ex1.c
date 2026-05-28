#include <stdio.h>
int main() {
    int ArrNum[10], Choice, i, offset;
    printf("number: ");
    for ( i = 0; i < 10; i++) {
        scanf("%d", &ArrNum[i]);}
    
    printf("Menu:\n");
    printf("1. Display the numbers\n");
    printf("2. Display it in reverse order\n");
    printf("3. Display values of even indices\n");
    printf("4. Display values of odd indices\n");
    printf("5. Rotate array by k (Forward)\n");
    printf("6. Rotate array by k (Backward)\n");
    
    printf("choice: ");
    scanf("%d", &Choice);

    switch (Choice) {
        case 1:
            for ( i = 0; i < 10; i++) {
                printf("%d ", ArrNum[i]);
            }
            break;
        case 2:
            printf("\nNumbers in reverse order: ");
            for ( i = 9; i >= 0; i--) {
                printf("%d ", ArrNum[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("Values of even indices: ");
            for ( i = 0; i < 10; i += 2) {
                printf("%d ", ArrNum[i]);
            }
            printf("\n");
            break;
        case 4:
            printf("Values of odd indices: ");
            for ( i = 1; i < 10; i += 2) {
                printf("%d ", ArrNum[i]);
            }
            printf("\n");
            break;
        case 5:
        	printf("offset: ");
        		scanf("%d", &offset);
        	offset = offset % 10;
        	for ( i = 0; i < 10; i++) {
   				printf("%d ", ArrNum[(10 - offset + i) % 10]);
   			}
            break;
        case 6:
        	printf("offset: ");
        		scanf("%d", &offset);
			offset = offset % 10;
        	for ( i = 0; i < 10; i++) {
   				printf("%d ", ArrNum[(i + offset ) % 10]);
   			}
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
