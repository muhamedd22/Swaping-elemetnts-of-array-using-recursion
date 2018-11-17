#include <iostream>
#include <array>
using namespace std;


void invert(char* arr,int sizee);
void swaping(char* arr, int a, int b);
int main()
{
    int sizee;
    cout<<"enter array size"<<endl;
    cin>>sizee;
    char arr[sizee];
    for(int i=0;i<sizee;i++){
            cout<<"enter array element number "<<i+1<<endl;
            cin>>arr[i];
            }




     //invert(arr,sizee);
     //swaping(arr,1,5);





    cout<<"{ ";
    for(int i=0;i<sizee;i++){
        cout<<arr[i];
    }
    cout<<" }"<<endl;


    return 0;
}
void invert(char* arr,int sizee){
cout<<"{ ";
for(int i=sizee;i>-1;i--){

    cout<<arr[i];
}
cout<<" }";
}
void swaping(char* arr, int a, int b){
char temp;
if(a>=b){
        return;
}

   swap(arr[a],arr[b]);
    swaping(arr,(a+1),(b-1));

}




