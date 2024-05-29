#include <stdio.h>

void bubbleSort(int array[], int len){
        for(int i = 0; i < len; i++){
                for(int j = 0; j < len-i-1; j++){
                        if(array[j] > array[j+1]){
                                int temp = array[j];
                                array[j] = array[j+1];
                                array[j+1] = temp;
                        }
                }
        }
}

int main(){
	int array[9] = {9, 1, 0, 15, 13, 7, 5, 3,  11};
	int len = sizeof(array) / sizeof(array[0]);

        for(int i = 0; i < len; i++){
		if(i != len-1){
			printf("%d, ", array[i]);
		}else{
			printf("%d", array[i]);
		}
        }

	printf("\n");
	bubbleSort(array, len);

        for(int i = 0; i < len; i++){
                if(i != len-1){
                        printf("%d, ", array[i]);
                }else{
                	printf("%d", array[i]);
                }
        }

        printf("\n");

	return 0;
}
