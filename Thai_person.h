class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(int);// show nat_id
 };

 Thai_person::Thai_person(int nid){
	nat_id=nid;
	cout<<"Nat id: "<<nat_id<<endl;
 }

