#include "ShrubberyCreationForm.hpp"

/*Orthodox Cannonical Form*/
Shrubbery::Shrubbery() : AForm(){
	std::cout << "Shrubbery - Default Constructor\n";
}

Shrubbery::Shrubbery(Shrubbery &cpy) : AForm(cpy){
	std::cout << "Shrubbery - Copy Constructor\n";
}

Shrubbery::~Shrubbery(){
	std::cout << "Shrubbery - Default Destructor";
}

Shrubbery::Shrubbery(const std::string name): AForm(name, 145, 137)
{
	std::cout << "Shrubbery - "<< name <<" Constructor\n";
}

Shrubbery & Shrubbery::operator=(const Shrubbery &value){
	(void)value;
	return(*this);
}

void Shrubbery::exec()const
{
	std::ofstream treeF;
	treeF.open(name + "_shrubbery", std::ios::trunc | std::ios::out);
	if (!(treeF.is_open()))
		std::cout << "Error! File could not opened!\n";
	else
	{
		treeF <<"                                                         ." << std::endl <<
				"                                              .         ;" << std::endl <<
				"                 .              .              ;%     ;;" << std::endl <<
				"                   ,           ,                :;%  %;" << std::endl <<
				"                    :         ;                   :;%;'     .," << std::endl <<
				"           ,.        %;     %;            ;        %;'    ,;" << std::endl <<
				"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
				"              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
				"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
				"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
				"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
				"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
				"                      `@%:.  :;%.         ;@@%;'" << std::endl <<
				"                        `@%.  `;@%.      ;@@%;" << std::endl <<
				"                          `@%%. `@%%    ;@@%;" << std::endl <<
				"                            ;@%. :@%%  %@@%;" << std::endl <<
				"                              %@bd%%%bd%%:;" << std::endl <<
				"                                #@%%%%%:;;" << std::endl <<
				"                                %@@%%%::;" << std::endl <<
				"                                %@@@%(o);  . '" << std::endl <<
				"                                %@@@o%;:(.,'" << std::endl <<
				"                            `.. %@@@o%::;" << std::endl <<
				"                               `)@@@o%::;" << std::endl <<
				"                                %@@(o)::;" << std::endl <<
				"                               .%@@@@%::;" << std::endl <<
				"                               ;%@@@@%::;." << std::endl <<
				"                              ;%@@@@%%:;;;." << std::endl <<
				"                          ...;%@@@@@%%:;;;;,..    ydegerli"<< std::endl;
	}
	treeF.close();
}
