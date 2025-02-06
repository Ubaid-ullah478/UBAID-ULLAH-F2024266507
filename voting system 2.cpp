#include<iostream>
using namespace std;
int main()
{
	int numCandidates,numVoters;
	
	cout<<"enter number of candidates:";
	cin>>numCandidates;
	
	string candidates[numCandidates];
	int votes[numCandidates]= {0};
	
	cout<<"enter the name of candidates:"<<endl;
	
	for(int i=0;i<numCandidates;i++)
	{
		cout<<"candidate"<<i+1<<":";
		cin>>candidates[i];
	}
	
	cout<<"enter number of voters:";
	cin>>numVoters;
	
	for (int i=0;i<numVoters;i++)
	{
		int vote;
		cout << "Voter " << i + 1 << ", cast your vote (1 to " << numCandidates << "): ";
		cin>>vote;
		
		if(vote >=1 && vote <numCandidates)
		{
			votes[vote-1]++;
		}
		else
		{
			cout<<"Invalid vote! Try Again"<<endl;
			i--;
		}
	}


    int maxVotes=votes[0];
    int winnerIndex=0;
    
    for(int i=0;i <numCandidates;i++)
    {
    	if(votes[i]>maxVotes)
    	{
    	   maxVotes=votes[i];
    	   winnerIndex=i;
        }
    }
    	
    	
    cout<<endl<<"election result"<<endl;
    cout<<"winner"<<candidates[winnerIndex] << "with" << maxVotes <<"votes"<<endl;
    
    return 0;
    	
}
