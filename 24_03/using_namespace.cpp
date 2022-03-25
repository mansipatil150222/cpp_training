#include<iostream>
using namespace std;
namespace NS1{
    int i;
    namespace NS2
    {
        int j;
    } // namespace NS2
    
} // namespace NS1
int main(){
    NS1::i=19;
    NS1::NS2::j=10;
    cout<<NS1::i<<NS1::NS2::j<<"\n";
    using namespace NS1;
    //Now that NS1 is in view, NS2 can be used to refer to j.
    cout<<i*NS2::j;
    return 0;
}
