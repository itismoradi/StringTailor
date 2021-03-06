#ifndef COMMAND_IG
#define COMMAND_IG

#include <string>
#include <array>
#include <history.hpp>
#define MAX_COMMAND_LENGTH 1000

class Command
{
    public:
        Command();
        Command(History *);
        void getCommand();
    private:
        char userCommand[MAX_COMMAND_LENGTH];
        std::string firstOperand;
        std::string operator_;
        std::string secondOperand;
        History * history;

        void help();
        void separator();
        bool isEmpty() const;
        bool isComputational() const;
        void toLowerCaseCommand(std::string &);
        
        void find_firstOperand_class();
        template <class T> void find_secondOperand_class(T);
        template <class X, class Y> void findOperator(X, Y);
};

#endif