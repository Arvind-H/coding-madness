//This file contains various sorts.
void selection_sort(int a[],int num)
{
    int i, j, min_index, temp;
    for(i=0;i<num;i++){
        min_index = i;
        for(j=i+1;j<num;j++){
            if(a[j] < a[min_index])
                min_index = j;
        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    for(i=0;i<num;i++)
    printf("%d",a[i]);
}

void insertion_sort(int a[], int num)
{

}

