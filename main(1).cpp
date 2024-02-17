#include <iostream>
//#include "QueueArr.cpp"
#include <queue>
using namespace std;
struct task{
	int ID;
	string Name;
}
int main()
{
	queue<task> q;
	int Choise;
	do{
		cout<<"Press 1 To Add New Task:)\n";
		cout<<"Press 2 To Remove Task:)\n";
		cout<<"Press 1 To Exit:)\n";
		switch (Choise)
		{
		case 1:
			task t;
			cin>>t.Name>>t.ID;
			q.enqueue(t);
			break;
		case 2:
			task t=q.Front();
			cout<<t.Name<<" "<<t.ID<<endl;
			q.dequeue();
			break;
		case 3:
		 exit(0);
		 break;
		default:
			cout<<"Your Choise Is Wrong\n Please Enter Right Choise\n";
			break;
		}
	}while(Choise!=4);
	return 0;
}