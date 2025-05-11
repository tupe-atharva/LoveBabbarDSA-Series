#include<iostream>
using namespace std;

void update (int **p2){
    //p2 = p2 + 1;
    // Kuch change hoga ? - Nope
    // Reason : Copy of p2 is created by the function and updated, so the main function is printing the non updated orignal p2.

    //*p2 = *p2 + 1;
    // Kuch change hoga ? - YES
    // *p2 == p1, the * operator is the dereference operator, *p2 means go to the value of the address pointed by p2 and *p2 + 1 means update the value to the next int location.
    // So address stored in p1 is updated.

    **p2 = **p2 + 1;
    // Kuch change hoga ? - yes
    // **p2 == *p1 == num == 5;
    // so **p2 + 1 == 5 + 1 == 6


}


int main(){
 
int num = 5;
int *p1 = &num;
int **p2 = &p1;

cout << endl << endl;

cout << "Before Updation : " << endl;
cout << num << endl;
cout << p1 << endl;
cout << p2 << endl << endl;

update(p2);

cout << "After Updation : " << endl;
cout << num << endl;
cout << p1 << endl;
cout << p2 << endl << endl;

return 0;
}