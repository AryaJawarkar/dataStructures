#include<bits/stdc++.h>
class user{
		string username;
		string password;
	public:
		bool verify(string password){
			return strcmp(this->password,password); 
		}
}
class heavyDriver{
		map<string,int> mp;

		vector<pair<user,vector<int>>> users;


	public:

		bool login(string username,string password){
			bool output = false;
			int idx = NULL;
			if(this->mp.find(username)!= this->mp.end()){
				idx = this->mp[username];
				user *u = this->users[idx].first;
				output = u->verify(password);
			}
			return output;
		}

		bool signup(string username,string password){
			bool output = false;
			if()
		}
:
