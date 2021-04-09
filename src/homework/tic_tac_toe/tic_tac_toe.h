//h
#include<string>
#include<vector>
using std::string;  using std::vector;

class TicTacToe
{
public:
    bool game_over(); //Updated
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{return player;}
    void display_board() const;
    //HW 7 additions
    string get_winner(){return winner;}

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    //HW 7 additions
    void set_winner();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

    string player, winner;
    vector<string> pegs = {" "," "," "," "," "," "," "," "," "};
};