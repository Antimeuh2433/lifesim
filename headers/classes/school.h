#ifndef SCHOOL_H
#define SCHOOL_H

#include "./occupation.h"
#include "./teacher.h"
#include "./classmate.h"

namespace lsim {
	class School : public lsim::Occupation {
		public:
			School(lsim::mainCharacter *nSelf, int nIndex, int nSchoolType = lsim::SCHOOLNULL, int nCurrentYear = 1);
			short int updateGrades();
			void goToMenu();
			void passAYear();
		private:
			short int currentYear;
			short int avgGrades;
			lsim::Teacher teacher;
			std::vector<lsim::Classmate> classmates;
			lsim::io::Menu classmatesMenu;
	}; // class School
} // namespace lsim

#endif // ifndef SCHOOL_H