#include <iostream>
using namespace std;
int main(void){		
int m;	
cout<<"escriba el numero para multiplicar" <<endl;	
cout<<"se desplegara la tabla del 1 al 12" <<endl;
cin>> m;	
cout<<endl<<endl;		
for(int i=1;i<=12;i++){		
cout<<m<<" * "<<i<<" = "<< m*i<<endl;	
}
system("pause");		
return 0;
}


