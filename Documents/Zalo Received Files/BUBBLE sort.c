//sap xep noi bot
#include <stdio.h>
// ----------------- chuong trình con
void bubbleSort(int arr[], int n)
{
   int i,i2,j, dacothutu, w; 
   for (i=1; i<n-1; i++) //sau mot lan: so MAX xuong duoi cung
   		{
   			dacothutu =1;
            for (j=0; j<n-i-1; j++)            
				if (arr[j]>arr[j+1]) 
					{
                	w = arr[j];
					arr[j]= arr[j+1];
					arr[j+1]=w;
                	dacothutu =0;
                	for (i2=0; i2<=5; i2++) printf ("\n i= %d Mot so = %d", i, arr[i2]);
					}
		if (dacothutu) break;
        }
      
}
//----------- main -----------
int main() 
{	int i;
    int arr[] = { 7, 2, 9, 20, 30, 5 };    
    bubbleSort(arr, 6);
    for (i=0; i<=5; i++) printf ("\n Mot so = %d", arr[i]);
	
    return 0;
}
