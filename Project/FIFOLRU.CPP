#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    system("cls");
    int option;

    do {
        system("cls");
        printf("\n--------------------------------------------------------------------------------");
        printf("\t\tWelcome to Page Replacement Algorithm in OS!\n");
        printf("--------------------------------------------------------------------------------\n");
        printf("\t\tGroup Members: Jeric J. Dela Cruz\n");
        printf("\t\t\t       Menard C. Macaraeg\n");
        printf("\t\t\t       Jodilyn A. Sarmiento\n");
	printf("\t\tGroup Number: 12\n");
        printf("\t\tSection: BSIT 2-2\n\n");
        printf("--------------------------------------------------------------------------------\n");
        printf("Page Replacement Algorithm:\n");
        printf("[1] First In First Out (FIFO)\n");
        printf("[2] Least Recently Used (LRU)\n");
        printf("[3] Exit\n");
        printf("Option: ");
        scanf("%d", & option);

        switch(option){
        case 1: {
            char referenceString[50];
            int NumFrames;
            int pageHit = 0;
            int pageFault = 0;
            int totalPageReference = 0;
            int frameIndex = 0;
            char frame[10] = {0};
            char pageStatus[6] = {0};
            int i, j;

            printf("\nEnter Number of Frames: ");
            scanf("%d", & NumFrames);

            printf("Enter Reference Strings: ");
            scanf("%s", referenceString);

            system("cls");
            printf("\nPage Reference |");
            for(i =1; i<= NumFrames; i++){
                printf(" F%d |", i);
            }

            for(i= 0; i < strlen(referenceString); i++){
                printf("\nReference (%c)  |", referenceString[i]);
                int count = 0;
                for(j=0; j< NumFrames; j++){
                    if (referenceString[i] == frame[j]){
                        count= 1;
                        break;
                    }
                }
                if(count != 0){
                    pageHit++;
                    strcpy(pageStatus, "Hit");
                } 
		else {
                    pageFault++;
                    strcpy(pageStatus, "Fault");
                    frame[frameIndex] = referenceString[i];
                    frameIndex = (frameIndex + 1) % NumFrames;
                }
                for (j=0; j<NumFrames; j++){
                    printf(" %c  |", frame[j]);
                }
                printf("  %s", pageStatus);
            }

            printf("\n\nPage Hit = %d", pageHit);
            printf("\nPage Fault = %d", pageFault);

            totalPageReference = pageHit + pageFault;
            printf("\nTotal Page Reference = %d", totalPageReference);
            getchar();
            break;
        }

        case 2: {
            char referenceString[50];
            int NumFrames;
            int pageHit = 0;
            int pageFault = 0;
            int totalPageReference = 0;
            int frameIndex = 0;
            char frame[50] = {0};
            char pageStatus[6] = {0};
	    int i, j, k;

	    printf("Enter Number of Frames: ");
	    scanf("%d", & NumFrames);
	    getchar();
	    printf("Enter Reference Strings: ");
	    gets(referenceString);

	    system("cls");
	    printf("\nPage Reference |");
	    for(i =1; i < NumFrames+1; i++){
		printf(" F%d |", i);
	    }
	    for(i=0; i< strlen(referenceString); i++){
		int count = 0;

		printf("\nReference (%c)  |", referenceString[i]);
		for(j=0; j< NumFrames; j++){
		    if (referenceString[i] == frame[j]){
			count = 1;
			break;
		    }
		}
		if(count != 0){
		    pageHit++;
		    strcpy(pageStatus, "Hit");
                } 
		else {
                    pageFault++;
                    strcpy(pageStatus, "Fault");
                    int MaximumDis = -1;
                    int counter2 = 0;
                    for(j=0; j< NumFrames; j++){
                        if (frame[frameIndex] == '\0') {
                            frame[frameIndex] = referenceString[i];
                            if (frameIndex != NumFrames - 1){
                                frameIndex++;
                            }
                            counter2 = 1;
                            break;
                        } 
			else {
                            int CurrentPage = 0;
                            for(k = i-1; k >= 0; k--){
                                ++CurrentPage;
                                if (frame[j] == referenceString[k]){
                                    break;
                                }
                            }
                            if(MaximumDis < CurrentPage){
                                MaximumDis = CurrentPage;
                                frameIndex = j;
                            }
                        }
                    }
                    if(counter2 == 0){
                        frame[frameIndex] = referenceString[i];
                    }
                }
                for (j = 0; j < NumFrames; j++) {
                    printf(" %c  |", frame[j]);
                }
                printf(" : %s", pageStatus);
            }

            printf("\n\nPage Hit = %d", pageHit);
            printf("\nPage Fault = %d", pageFault);

            totalPageReference = pageHit + pageFault;
            printf("\nTotal Page Reference = %d", totalPageReference);
            getchar();
            break;
        }

        case 3:
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tGoodbye...");
            getchar();
            break;

        default:
            printf("ERROR!!\n");
            break;
        }
    } while (option != 3);

    return 0;
}