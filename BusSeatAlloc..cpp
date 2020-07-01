#include<iostream.h>
using namespace std;
int seat[5][10];

	struct family
	{

		int familyMember;
		int femaleGTEighteen;
		int femaleLTEighteen;
		int maleGTEighteen;
		int maleLTEighteen;
		int differntlyAbledMale;
		int differntlyAbledFemale;
	};
	
int main()
{
	struct family a;
	
	int totalSeat=0;
	for(int i=0;i<10;i++)
	{
	for(int j=0;j<5;j++)
	{
	  
	seat[i][j]=0;	
		
	}
	}
	
	
	while(totalSeat<=50)
	{
	cout<<"Enter no. Of Family Member"<<endl;
	cin>>a.familyMember;
	
	cout<<"No. of male Greater than 18"<<endl;
	cin>>a.maleGTEighteen;
	
	cout<<"No. of male Less than 18"<<endl;
	cin>>a.maleLTEighteen;	
	
	cout<<"No. of female Greater than 18"<<endl;
	cin>>a.femaleGTEighteen;
	
	cout<<"No. of female Less than 18"<<endl;
	cin>>a.femaleLTEighteen;
	
	
	cout<<"No. of differentlyAbled Male"<<endl;
	cin>>a.differntlyAbledMale;
	
	cout<<"No. of differentlyAbled Female"<<endl;
	cin>>a.differntlyAbledFemale;
	
	if(a.femaleGTEighteen+a.femaleLTEighteen+a.maleGTEighteen+a.maleLTEighteen+a.differntlyAbledMale+a.differntlyAbledFemale==a.familyMember)
	{
		
	
		int man=a.maleGTEighteen;
		int boy=a.maleLTEighteen;
		int women=a.femaleGTEighteen;
		int girl=a.femaleLTEighteen;
		int daf=a.differntlyAbledFemale;
		int dam=a.differntlyAbledMale;
	
	
	/*
    1 --> man
	2 --> boy
	3 -->women
	4 -->girl
	5 -->differntlyAbledFemale
	6 -->differntlyAbledMale
	*/
	
	
	for(int i=0;i<10;i++)
	{
	for(int j=0;j<5;j++)
	{
	  
	if(girl>0)
	{
		if(j>=2 && j<=3 && i>=0 && i<=2 && seat[i][j]==0 && seat[i][j]!=4 && a.familyMember<=2)
		{
			seat[i][j]=4;
			girl--;
		}
		if(j>=1 && j<4 && i>=2 &&i<=9 && seat[i][j]==0 && seat[i][j]!=4)
		{
		    seat[i][j]=4;
			girl--;	
		}
		
	}
	
	if(boy>0)
	{
		/*
        if(j>0 && j<=1 && i>=0 && i<=1 && seat[i][j]==0 && seat[i][j]!=2)
		{
			seat[i][j]=2;
			boy--;
		}*/
		
		if(j>=1 && j<4 && i>=2 &&i<=9 && seat[i][j]==0 && seat[i][j]!=2 && a.familyMember<=1)
		{
		    seat[i][j]=2;
			boy--;	
		}
		if(j>=1 && j<4 && i>=2 &&i<=9 && seat[i][j]==0 && seat[i][j]!=2)
		{
		    seat[i][j]=2;
			boy--;	
		}
	}	
	
	
	
	
	if(man>0)
	{
		if(j>=0 && j<=1 && i>=0 && i<=1 && seat[i][j]==0 && seat[i][j]!=1 && a.familyMember<=2)
		{
			seat[i][j]=1;
			man--;
		}
		
		if(j>=0 && j<=4 && i>=2 &&i<=9 && seat[i][j]==0 && seat[i][j]!=1)
		{
		    seat[i][j]=1;
			man--;	
		}
		
		if(seat[9][0]==1 && seat[9][0]==1)
		{
			cout<<"No seat available for men"<<endl;
		}
		
	}
	
	if(women>0)
	{
		if(j>=1 && j<=4 && i>=0 && i<=2 && seat[i][j]==0 && seat[i][j]!=3 && a.familyMember<=3)
		{
			seat[i][j]=3;
			women--;
		}
		
		if(j>=0 && j<=4 && i>=2 &&i<=9 && seat[i][j]==0 && seat[i][j]!=3)
		{
		    seat[i][j]=3;
			women--;	
		}
	//we have to put list of all possibility where women are in last seat....	
		if((seat[9][4]==3))
		{
			cout<<"No seat available for men"<<endl;
		}
	}
	
	
	
	if(daf>0)
	{
	if(j>=1 && j<=1 && i>=0 && i<=1 && a.familyMember<2)
	{
	seat[i][j]=5;
	daf--;	
	}
	
	if(j>=0 && j<=4 && i>=2 && i<=9 && seat[i][j]==0 && seat[i][j]!=3)
	{
	seat[i][j]=5;
	daf--;	
	}	
	}
	
	
	if(dam>0)
	{
	if(j>=1 && j<=1 && i>=0 && i<=1 && a.familyMember<2)
	{
	seat[i][j]=6;
	dam--;	
	}
	
	if(j>=0 && j<=4 && i>=2 && i<=9 && seat[i][j]==0 && seat[i][j]!=3)
	{
	seat[i][j]=6;
	dam--;	
	}	
	}
	
			
	}}
	
	
	for(int i=0;i<10;i++)
	{
	for(int j=0;j<5;j++)
	{
	  
	cout<<" "<<seat[i][j];	
		
	}
	cout<<endl;
	}
	
	

	}
	else
	{
		cout<<"input Correct Member List"<<endl;
		totalSeat=totalSeat+a.familyMember;
	}
	totalSeat=totalSeat-a.familyMember;
	cout<<"total seat"<<totalSeat<<endl;
	
	
	cout<<endl;
    cout<<"1 --> man"<<endl;
	cout<<"2 --> boy"<<endl;
	cout<<"3 -->women"<<endl;
	cout<<"4 -->girl"<<endl;
	cout<<"5 -->differntlyAbledFemale"<<endl;
	cout<<"6 -->differntlyAbledMale"<<endl;
	}
	

	return 0;
}

