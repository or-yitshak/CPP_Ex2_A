#include "Notebook.hpp"
// #include <string>
using namespace std;
using namespace ariel;

void Notebook::write(int page, int row, int column, Direction d, string const &str)
{
    // if (column >= 100)
    // {
    //     throw invalid_argument("column is out of bound");
    // }
    // if (d == Direction::Horizontal && str.size() > 100 - column)
    // {
    //     throw invalid_argument("string is ending out of bound");
    // }
    // if (str.size() == 0)
    // {
    //     return;
    // }
    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }

} // col<100 and if direction horizontal str.size<100-column

string Notebook::read(int page, int row, int column, Direction d, int num_to_read)
{
    return "";
}

void Notebook::erase(int page, int row, int column, Direction d, int num_to_erase)
{
}

void Notebook::show(int page_num)
{
}