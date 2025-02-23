#include <iostream>
using namespace std;

int counter = 0;
int n = 0;
void Organize(int n, int original[], int target[], int buffer[])
{
if(n==1){
    counter++;
    return;
}


Organize(n-1, original, buffer, target);
    
counter++;

Organize(n-1, buffer, target, original);

}

int main(){
cout << "How many disks are there " <<endl;
cin >> n;
int rod1[n];
int rod2[n];
int rod3[n];
for (int i = 0; i < n; i++) {
 rod1[i] = i + 1;
}

Organize(n, rod1, rod2, rod3);
cout << "Total Moves: " << counter << endl;
 
return 0;
}
