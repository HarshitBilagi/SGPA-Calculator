#include<iostream>
#include<string.h>
using namespace std;
class sgpa
{
    private:
        string subjects[15];
        float n, gradepts[15], submarks[15], credits[15], totcred=0, totmarks=0, totgradepts=0;
        float numerator=0;
        float sgpa=0, percentage;
    public:
        void read()    /*read data from user*/
        {
            cout<<"\nenter the number of subjects"<<endl;
            cin>>n;
            for(int i=0; i<n; i++)
            {
                cout<<"enter subject"<<endl;
                cin>>subjects[i];
                cout<<"enter the subject marks"<<endl;
                cin>>submarks[i];
                totmarks=totmarks+submarks[i];     /*total marks calculated*/
                cout<<"enter the respective subject credits"<<endl;
                cin>>credits[i];
                totcred=totcred+credits[i];        /*total credits points calculated*/


                if(0<=submarks[i] && submarks[i]<40)        /*this conditional statement is to calculate subject grade points*/
                {
                    gradepts[i]=0;
                }
                else if(40<=submarks[i] && submarks[i]<45)  
                {
                    gradepts[i]=4;
                }
                else if(45<=submarks[i] && submarks[i]<50)  
                {
                    gradepts[i]=5;
                }
                else if(50<=submarks[i] && submarks[i]<60)  
                {
                    gradepts[i]=6;
                }
                else if(60<=submarks[i] && submarks[i]<70)  
                {
                    gradepts[i]=7;
                }
                else if(70<=submarks[i] && submarks[i]<80)
                {
                    gradepts[i]=8;
                }
                else if(80<=submarks[i] && submarks[i]<90)
                {
                    gradepts[i]=9;
                }
                else if(90<=submarks[i] && submarks[i]<100)
                {
                    gradepts[i]=10;
                }
            }
            percentage=((totmarks*100)/(n*100));
            for(int i=0; i<n; i++)
            {
                numerator=numerator+(credits[i]*gradepts[i]);
            }
            sgpa=numerator/totcred;
        }

        void display()
        {
            cout<<"\nSUBJECTS\tMARKS\tGRADE_POINTS\tCREDITS\n";
            for(int i=0; i<n; i++)
            {
                cout<<subjects[i]<<"\t\t"<<submarks[i]<<"\t\t"<<gradepts[i]<<"\t\t"<<credits[i]<<endl;
            }
            cout<<"Total marks = "<<totmarks<<endl;
            cout<<"Total credits = "<<totcred<<endl;
            cout<<"Total percentage = "<<percentage<<endl;
            cout<<"SGPA = "<<sgpa<<endl;
        }
};

int main()
{
    sgpa s;
    s.read();
    s.display();
}