#include <iostream>
#include <sstream>
#include <fstream>
#define MAX 50

using namespace std;
string kname[2] = {"A+~F", "P/F"}; // String for grading

class MyClass{
private:
	int code;		    // class code
	string name; 	// class name
	int unit;		    // credites
	int grading;	    // grading category (1:A+~F, 2:P/F)
public:
    MyClass(int ncode, string nname, int nunit, int ngrading){
        code = ncode; name = nname; unit = nunit; grading = ngrading;
    }
    ~MyClass();
    int getCode(){return code;}
    string getName(){return name;}
    int getUnit(){return unit;}
    int getGrading(){return grading;};
    void setCode(int newcode){code = newcode;}
    void setName(string newname){name = newname;}
    void setUnit(int newunit){unit = newunit;}
    void setGrading(int newgrading){grading = newgrading;}
    string toString(){
        stringstream sstm;
        sstm <<  "[" << code << "] " << name << " [credit " << unit << " - "+kname[grading-1] << "]";
        return sstm.str();
    }
    string toStringSave(){
        stringstream sstm;
        sstm << code << " " << name << " " << unit << " " << grading;
        return sstm.str();
    }
};

class MyClassManager{
private:
    MyClass* allclasses[MAX];
    MyClass* myclasses[10];
    int count;
    int mycount;
public:
    MyClassManager(){
        count=0; mycount=0;
    }
    ~MyClassManager(){}
    int getCount(){return count;}
    int getMyCount(){return mycount;}

    void loadData(string filename);
    void printAllClasses(); // Print all class list
    void findClasses(string name); // Search a class by name from the list
    void saveAllClasses(string filename); // Save all class list

    // Functions for modifying
    void addClass(); // Add a class into the list
    void editClass(); // Modify a class in the list

    // Functions for making
    void applyMyClass(); // Apply a class
    void printMyClasses(); // Print my classes
    void saveMyClasses(string filename); // Save my classes
};


int main() {
	int no;	// menu number 
    int quit = 0;
	string name;

	MyClassManager manager; // MyClassManager obj

	manager.loadData("classes.txt");

	while(!quit){
		cout << "Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit\n";
		cout << ">> Menu? > ";
		cin >> no;
        switch(no){
            case 1: 
			    cout << "> 1.Print All Classes\n";
	    		manager.printAllClasses();
                break;
            case 2:
			    cout << "> 2.Add a Class\n";
    			manager.addClass();
                break;
		    case 3:
    			cout << "> 3.Modify a Class\n";
	    		manager.editClass();
                break;
            case 4:
            	cout << "> 4.Search a Class\n";
			    cout << ">> Enter class name > ";
			    cin >> name;
    			manager.findClasses(name);
                break;
		    case 5:
    			cout << "> 5.Apply a class\n";
	    		manager.applyMyClass();
		    	cout << manager.getMyCount() << " classes has been applied.\n";
                break;
    		case 6:
    			cout << "> 6.My classes\n";
	    		manager.printMyClasses();
                break;
    		case 7:
    			cout << "> 7.Save\n";
	    		manager.saveMyClasses("myclasses.txt");
		    	cout << "\n> All my classes ware saved to my_classes.txt.\n";
			    manager.saveAllClasses("classes.txt");
			    cout << "\n> All of class list ware saved to classes.txt.\n";
                break;
            case 0:
                quit = 1;
                break;
		}
	}
	return 0;
}

void MyClassManager::loadData(string filename){
    string line, name;
    int code, unit, grading;
	ifstream file(filename);
	while(!file.eof()){
        if(file.eof()) break;
		file >> code >> name >> unit >> grading;
        allclasses[count] = new MyClass(code, name, unit, grading);
		count++;
	}
	file.close();
    cout << count << " classes are loaded.\n";
}

void MyClassManager::printAllClasses(){
	for (int i=0; i<count; i++){
		cout << allclasses[i]->toString() << endl;
	}
}

void MyClassManager::saveAllClasses(string filename){
	ofstream file(filename);
	for(int i=0; i<count; i++){
		file << allclasses[i]->toStringSave();
        if(i<count-1) file << endl;
	}
	file.close();	
}

void MyClassManager::findClasses(string name){
	int found = 0;
	cout << "Searching keyword: " << name << endl;
	for(int i=0; i<count; i++){
		if(allclasses[i]->getName().find(name) != string::npos){
		    cout << allclasses[i]->toString() << endl;
			found++;
		}
	}
	cout << count << " classes found.\n";
}

// You must complete these functions.
void MyClassManager::addClass(){
// Caution : Don't allow the duplicate class code.
// You must complete this function.
    string name;
    int code, unit, grading;
	cout << ">> code number > ";
	cin >> code;
	for (int i = 0; i < count; i++)
	{
		if (code == allclasses[i]->getCode())
		{
			cout << "Code duplicated! Retry.\n";
			cout << ">> code number > ";
			cin >> code;
			i = -1;
		}
	}
	cout << ">> class name > ";
	cin >> name;
	cout << ">> credits > ";
	cin >> unit;
	cout << ">> grading (1: A+~F, 2: P/F) > ";
	cin >> grading;
	allclasses[count++] = new MyClass(code, name, unit, grading);
	cout << endl;
	// You must complete this section.
}

void MyClassManager::editClass(){
	int code;
	int pick = -1;
	int unit, grading;
	string name;

	while (pick == -1)
	{
		cout << ">> Enter a code of class > ";
		cin >> code;
		for (int i = 0; i < count; i++)
		{
			if (code == allclasses[i]->getCode())
			{
				pick = i;
				break;
			}
		}
		if (pick == -1)
			cout << "> No such class.\n";
	}
	cout << "> Current: " << allclasses[pick]->toString() << endl;
	cout << "> Enter new class name > ";
	cin >> name;
	allclasses[pick]->setName(name);
	cout << "> Enter new credits > ";
	cin >> unit;
	allclasses[pick]->setUnit(unit);
	cout << "> Enter new grading (1: A+~F, 2: P/F) > ";
	cin >> grading;
	allclasses[pick]->setGrading(grading);
	cout << "> Modified.\n\n";
	// You must complete this section.
}



void MyClassManager::applyMyClass(){

// You must make all these functions.

	int pick;
	int code;	
	int	remain = 1;
	while (remain == 1)
	{
		pick = -1;
		while (pick < 0)
		{
			cout << ">> Enter a code of class > ";
			cin >> code;
			for (int i = 0; i < count; i++)
			{
				if (code == allclasses[i]->getCode())
				{
					pick = i;
					break;
				}
			}
			for (int i = 0; i < mycount; i++)
			{
				if (code == myclasses[i]->getCode())
				{
					pick = -2;
					cout << "> Already applied.\n";
					break;
				}
			}
			if (pick == -1)
				cout << "> No such class.\n";
		}
		cout << allclasses[pick]->toString() << endl;
		myclasses[mycount] = new MyClass(allclasses[pick]->getCode(), allclasses[pick]->getName(), allclasses[pick]->getUnit(), allclasses[pick]->getGrading());
		mycount++;
		cout << "Add more?(1:Yes, 2:No) > ";
		cin >> remain;
	}
}

void MyClassManager::printMyClasses(){

// You must make all these functions.
	int	credits = 0;
	for (int i = 0; i < mycount; i++)
	{
		cout << (i + 1) << ". " << myclasses[i]->toString() << endl;
		credits += myclasses[i]->getUnit();
	}
	cout << "All : " <<  credits << " credits\n" << endl;
	

}

void MyClassManager::saveMyClasses(string filename){

// You must make all these functions.
	int credits = 0;
	int	gradecredits = 0;
	int	pfcredits = 0;
	for (int i = 0; i < mycount; i++)
		credits += myclasses[i]->getUnit();
	for (int i = 0; i < mycount; i++)
	{
		if (myclasses[i]->getGrading() == 1)
			gradecredits += myclasses[i]->getUnit();
		else
			pfcredits += myclasses[i]->getUnit();
	}
	ofstream file(filename);
	file << "My CLasses\n";
	for (int i = 0; i < mycount; i++)
		file << (i + 1) << ". " << myclasses[i]->toString() << endl;
	file << "All : " <<  mycount << " classes";
	file << ", " << credits << " credits ";
	file << "(" << "A+~F: " << gradecredits << " credits, ";
	file << "P/F: " << pfcredits << " credits)";
	file.close();
}