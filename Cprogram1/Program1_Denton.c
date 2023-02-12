#include<stdio.h>

void printPage(float array[12]){
    printf("Sales Report: \n");
    for(int x=0; x<12; x++){
        switch(x){
            case 0:
            printf("January: %.2f\n", array[x]);
            break;
            case 1:
            printf("Febuary: %.2f\n", array[x]);
            break;
            case 2:
            printf("March: %.2f\n", array[x]);
            break;
            case 3:
            printf("April: %.2f\n", array[x]);
            break;
            case 4:
            printf("May: %.2f\n", array[x]);
            break;
            case 5:
            printf("June: %.2f\n", array[x]);
            break;
            case 6:
            printf("July: %.2f\n", array[x]);
            break;
            case 7:
            printf("August: %.2f\n", array[x]);
            break;
            case 8:
            printf("September: %.2f\n", array[x]);
            break;
            case 9:
            printf("October: %.2f\n", array[x]);
            break;
            case 10:
            printf("November: %.2f\n", array[x]);
            break;
            case 11:
            printf("December: %.2f\n", array[x]);
            break;

        }
    }
}

void getMax(float array[12]){
    float max=array[0];
    int index=0;
    for(int x=0; x<12; x++){
        if(array[x]>=max){
            max=array[x];
            index=x;
        }
    }
    printf("Max Month: \n");
    switch (index) {
    case 0:
        printf("January: %.2f\n", max);
        break;
    case 1:
        printf("Febuary: %.2f\n", max);
        break;
    case 2:
        printf("March: %.2f\n", max);
        break;
    case 3:
        printf("April: %.2f\n", max);
        break;
    case 4:
        printf("May: %.2f\n", max);
        break;
    case 5:
        printf("June: %.2f\n", max);
        break;
    case 6:
        printf("July: %.2f\n", max);
        break;
    case 7:
        printf("August: %.2f\n", max);
        break;
    case 8:
        printf("September: %.2f\n", max);
        break;
    case 9:
        printf("October: %.2f\n", max);
        break;
    case 10:
        printf("November: %.2f\n", max);
        break;
    case 11:
        printf("December: %.2f\n", max);
        break;
    }
}

void getMin(float array[12]){
    float min=array[0];
    int index=0;
    for(int x=0; x<12; x++){
        if(array[x]<=min){
            min=array[x];
            index=x;
        }
    }
    printf("Min Month: \n");
    switch (index) {
    case 0:
        printf("January: %.2f\n", min);
        break;
    case 1:
        printf("Febuary: %.2f\n", min);
        break;
    case 2:
        printf("March: %.2f\n", min);
        break;
    case 3:
        printf("April: %.2f\n", min);
        break;
    case 4:
        printf("May: %.2f\n", min);
        break;
    case 5:
        printf("June: %.2f\n", min);
        break;
    case 6:
        printf("July: %.2f\n", min);
        break;
    case 7:
        printf("August: %.2f\n", min);
        break;
    case 8:
        printf("September: %.2f\n", min);
        break;
    case 9:
        printf("October: %.2f\n", min);
        break;
    case 10:
        printf("November: %.2f\n", min);
        break;
    case 11:
        printf("December: %.2f\n", min);
        break;
    }
}

void getAverage( float array[12]){
    float sum=0;
    for(int x=0; x<12;x++){
        sum+=array[x];
    }
    float ans= sum/12;
    printf("Average: %.2f\n", ans);
}
void sixMonthAverage(float array[12]){
    printf("Six month moving average: \n");
    float ans=(array[0]+array[1]+array[2]+array[3]+array[4]+array[5])/6;
    printf("January-June: %.2f\n", ans);
    ans=(array[1]+array[2]+array[3]+array[4]+array[5]+array[6])/6;
    printf("febuary-july: %.2f\n", ans);
    ans=(array[2]+array[3]+array[4]+array[5]+array[6]+array[7])/6;
    printf("March-August: %.2f\n",ans );
    ans=(array[3]+array[4]+array[5]+array[6]+array[7]+array[8])/6;
    printf("April-September: %.2f\n",ans);
    ans=(array[4]+array[5]+array[6]+array[7]+array[8]+array[9])/6;
    printf("May-October: %.2f\n", ans);
    ans=(array[5]+array[6]+array[7]+array[8]+array[9]+array[10])/6;
    printf("June-November: %.2f\n", ans);
    ans=(array[6]+array[7]+array[8]+array[9]+array[10]+array[11])/6;
    printf("July-December: %.2f\n", ans);
    

}
void swap(float *x, float *y)
{
    float temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(float arr[12])
{
    int i, j, min_idx;
 
    
    for (i = 0; i < 11; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < 12; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}

void HighestToLowest(float array[12]){
    float copy[12];
    for(int x=0; x<12; x++){
        copy[x]=array[x];
    }
    printf("Highest to Lowest Months\n");
    selectionSort(array);
    
    for(int x=11; x>=0; x--){
        for(int y=0; y<12; y++){
            if(array[x]==copy[y]){
                if(y==0){
                    printf("January: %.2f\n", array[x]);   
                }
                if(y==1){
                    printf("Febuary: %.2f\n", array[x]);
                }
                if(y==2){
                    printf("March: %.2f\n", array[x]);
                }
                if(y==3){
                    printf("April: %.2f\n", array[x]);
                }
                if(y==4){
                    printf("May: %.2f\n", array[x]);
                }
                if(y==5){
                    printf("June: %.2f\n", array[x]);
                }
                if(y==6){
                    printf("July: %.2f\n", array[x]);
                }
                if(y==7){
                    printf("August: %.2f\n", array[x]);
                }
                if(y==8){
                    printf("September: %.2f\n", array[x]);
                }
                if(y==9){
                    printf("October: %.2f\n", array[x]);
                }
                if(y==10){
                    printf("November: %.2f\n", array[x]);
                }
                if(y==11){
                
                    printf("December: %.2f\n", array[x]);
                }
                copy[y]=0.0;
            }   
        }
    }
    
    
}

int main(){
    float array[12];
    FILE *fp;
    fp=fopen("numbers.txt", "r");
    for (int i = 0; i < 12; i++) {
        fscanf(fp, "%f", &array[i]);
    }
    fclose(fp);
    printPage(array);
    printf("\n");
    getMax(array);
    printf("\n");
    getMin(array);
    printf("\n");
    getAverage(array);
    printf("\n");
    sixMonthAverage(array);
    printf("\n");
    HighestToLowest(array);

}