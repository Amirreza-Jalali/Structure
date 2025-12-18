#include"/Users/apple/Desktop/computer/bits.cpp" 

using namespace std;
void AS()
{
    int n;
    cout<<"n :";
    cin>>n;
   int a[n][n];
   int count =0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       { 
           cin>>a[i][j];
           if(a[i][j]!=0) count++;
       }
   }
   int o=0,p=0;
    int as[count][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                as[o][p]=i;
                
                as[o][p+1]=j;
                
                as[o][p+2]=a[i][j];
                o++;  
            }  
            
        }
    }    
    cout<<"----------------------------\n"<<"AS\n";
        for(int i=0;i<o;i++)
   {
       for(int j=0;j<3;j++)
       {
           cout<<as[i][j]<<"  ";
       }
       cout<<"\n";
   }
////////////////////////////////////////////////////////
cout<<"AS 1:\n";
cout<<"n1 :";
   int n1;
   cin>>n1;
   int a1[n1][n1];
   int count1 =0;
   for(int i=0;i<n1;i++)
   {
       for(int j=0;j<n1;j++)
       { 
           cin>>a1[i][j];
           if(a1[i][j]!=0) count1++;
       }
   }
   int o1=0,p1=0;
    int as1[count1][3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(a1[i][j]!=0)
            {
                as1[o1][p1]=i;
                
                as1[o1][p1+1]=j;
                
                as1[o1][p1+2]=a1[i][j];
                o1++;  
            }  
            
        }
    }    
    cout<<"----------------------------\n"<<"AS 1\n";
        for(int i=0;i<o1;i++)
   {
       for(int j=0;j<3;j++)
       {
           cout<<as1[i][j]<<"  ";
       }
       cout<<"\n";
   }

   ////////////////////////////////////////////////////////


    cout<<"----------------------------\n"<<"sum \n";
    int sum[o][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(as[i][j]>as1[i][j])
            {
                sum[i][j]=as[i][j+2];
            }
            else if(as[i][j]<as1[i][j])
            {
                sum[i][j]=as1[i][j+2];
            }
            else if(as[i][j]==as1[i][j])
            {
                if(as[i][j+1]>as1[i][j])
                {
                    sum[i][j]=as[i][j+2];
                }
                else{
                    sum[i][j]=as1[i][j+2];
                }
            }
        }
    }
     for(int i=0;i<o;i++)
   {
       for(int j=0;j<3;j++)
       {
           cout<<sum[i][j]<<"  ";
       }
       cout<<"\n";
   }


}
int main()
{
    AS();
    return 0;
}