#include<iostream>
#include<arpa/inet.h>
//prints the multiple ip addresses belonging to an address/netmask.
using namespace std;
void ip_lists(string ip4,uint netmask)
{
 uint addr=inet_addr(ip4.c_str());
 
 uint hbits=(32-netmask);
// cout<<hbits<<endl;
 uint last=pow(2,hbits);
 //cout<<last;
 for(int x=0;x<(last-1);x++)
 {
 sockaddr_in sin;
 sin.sin_addr.s_addr=(addr+htonl(x));
  cout<<"\naddresses: "<<inet_ntoa(sin.sin_addr);
 }
}
int main()
{
 cout<<"\nip ranges\n";
 //write base ip and netmask
 ip_lists("127.0.0.1",20);
}