#include <iostream>
#include <rectangle.h>
using namespace std;
int ans=0;
void text(){
    ans=1;
}
int main() {
    rectangle a(1,4);
    cout << a.getY() << endl;
    text();
    cout<<ans<<"\n";
    return 0;
}
