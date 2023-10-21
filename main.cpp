#include "./Base/Project.h"
#include "./Base/Group.h"
#include "./Functions/Display_Func.h"
#include "./Functions/Extract_Data_Func.h"

int main(int argc, char const *argv[])
{
    //? To Store numbers of Groups AND PROJECTS
    std::vector<Group *> groups;
    std::vector<Project *> projects;

    // Date *date = new Date(10, 12, 2003);
    // Project *project = new Project("Hello World", date);
    // project->addSubmissionDate(4, date);

    // Date *new_date = new Date(30, 12, 2004);
    // project->addSubmissionDate(10, new_date);

    // projects.push_back(project);
    // // std::cout << project << std::endl;

    // displayTableTest(&groups, &projects);
    
    extractGroupInfoFile(&groups, "InputFiles\\GroupInfo.txt");
    for (size_t index = 0; index < groups.size(); index++)
    {
        if (groups[index] != nullptr)
        {
            std::cout << groups[index] << std::endl;
        }
        
    }
    
    return 0;
}
