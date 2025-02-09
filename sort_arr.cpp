#include <iostream>
using namespace std;



void sort_arr(int arr[],int length){

int min , min_index ;

 for(int i=0;i<length-1;i++){

    for(int j=i;j<length;j++){

        if(j==i){

             min = arr[j];
             min_index = j;
        }
        if(arr[j]<min){
             min = arr[j];
             min_index = j;

        }

    }
     int tmp = arr[i];
     arr[i] = arr[min_index];
     arr[min_index] = tmp;
     
 }


}






int main(){

    int arr[]{11,55,66,78,33,55,11,6,3,8};

    sort_arr(arr,sizeof(arr)/sizeof(arr[0]));

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){

        cout << arr[i]  << endl;
        
    }
    return 0;

}