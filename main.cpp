#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
using namespace std;

/*
*
* 1. В родительских классах (Project / TeamMember / Task) я использую "protected",
*	   чтобы дочерные классы могли получить доступ к его элементам. 
*    Почему не "public"? Для инкапсуляции. Чтобы извне не могли получить доступ к элементам.
*    Почему не "private"? Потому что он запрещает доступ к элементам родительского класса, и дочерным классам, и извне.
*
*	2. При создании дочерних классов, первым вызывается конструктор родительского элемента, 
*    так как без родительского класса невозможно представить дочерние классы. 
*    (ProjectTeamMember : public Project, public TeamMember), 
*    - можно представить так: один ОБЪЕКТ, состоящий из трёх классов. 
*    При этом, по этой последовательности ProjectTeamMember -> Project, TeamMember. Где каждый следующий класс зависит от предыдущего.
*		 
* 3. Что делает "public" в контексте: "class ProjectTeamMember : public Project, public TeamMember"?
*    Наследованные элементы от родительских классов (Project & TeamMember) будут хранятся в дочернем классе(ProjectTeamMember) как "public".
*	   Наследованные элементы от родительского класса должны каким то образом хранится в дочернем.
*    Взависимости от условий могут быть "public" (доступный везде), "protected" (доступный наследнику - дочернему классу), 
*    "private" (доступный только внутри самого класса - не наследуется и недоступен извне).
*
*/


class Project {
	protected:
		string projectName;

	public:
		Project(string_view name) {
			this->projectName = name;

			cout << "-- Constructor - Project" << endl;
		}
};

class TeamMember {
	protected:
		string memberName;

	public:
		TeamMember(string_view name) {
			this->memberName = name;

			cout << "-- Constructor - TeamMember" << endl;
		}
};

class Task {
  protected:
		string taskName;

	public:
		Task(string_view name) {
			this->taskName = name;

			cout << "-- Constructor - Task" << endl;
		}
};


class ProjectTeamMember : public Project, public TeamMember {
  public:
		ProjectTeamMember(string_view projectName, string_view memberName) 
												: Project(projectName), TeamMember(memberName) {
			cout << "-- Constructor - ProjectTeamMember" << endl;
		}

		void displayProjectTeamMember() {
			cout << "Project: " << projectName << endl 
						<< "Team Member: " << memberName << endl;
		}
};


class TeamMemberTask : public TeamMember, public Task {
  public:
		TeamMemberTask(string_view memberName, string_view taskName) : TeamMember(memberName), Task(taskName) {
			cout << "-- Constructor - TeamMemberTask" << endl;
		}

			void displayTeamMemberTask() {
			cout << "Team Member: " << memberName << endl
						<< "Task: " << taskName << endl;
		}
};




int main()
{
	system("clear");

	ProjectTeamMember ptm("Project X", "Alice");
	TeamMemberTask tmt("Bob", "Code Review");

	cout << "\nProject Team Member Information:" << endl;
	ptm.displayProjectTeamMember();

	cout << "\nTeam Member Task Information:" << endl;
	tmt.displayTeamMemberTask();

	return 0;
}