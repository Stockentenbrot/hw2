#include <iostream>
#include <fstream>

using namespace std;

int main(){
	double x0 = 0.5;
	int Nskip = 100; //Number of iterations to skip
	int Nend  = 200; //Number of total iterations
	double x[Nend-Nskip];
	ofstream out("output.dat");
	
	goto Duesseldorf;
	
	Helau:
	out.close();
	return 0;
	
	Duesseldorf:
	for(double r=0; r <= 4; r += 0.001)
	{
	    x[0]=x0;
	    for(int i=1; i <= Nskip; i++) x[0] = r*x[0]*(1.0-x[0]);
	    
	    for(int i=Nskip+1; i < Nend; i++)
	    {
	      x[i - Nskip] = r*x[i-Nskip-1]*(1-x[i-Nskip-1]);
	      
	    }
	    for (int i = 0; i < Nend-Nskip;i++)
	    {
	      out << r << "\t" << x[i] << endl;
	    }
	 }
	 goto Helau;
	 return 111115;
}
 
