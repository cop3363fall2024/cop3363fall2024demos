#include <iostream>

using namespace std;

int main(){

    
    int x=5, count=7;
    int result = x * ++count;
    cout << "x = " << result << ", count = " << count << endl;

    int x1=5, count1=7;
    int result1 = x1 * count1++;
    cout << "x = " << result1 << ", count = " << count1 << endl;

    
    // int x=5, count=7;
    // ++count;
    // int result = x * count;
    // cout << "x = " << result << ", count = " << count << endl;

    // int x1=5, count1=7;
    // count1++;
    // int result1 = x1 * count1++;
    // cout << "x = " << result1 << ", count = " << count1 << endl;

    // int x=5, count=7;
    // int result = x * (++count);
    // cout << "x = " << result << ", count = " << count << endl;

    // int x1=5, count1=7;
    // int result1 = x1 * (count1++);
    // cout << "x = " << result1 << ", count = " << count1 << endl;


    return 0;
}