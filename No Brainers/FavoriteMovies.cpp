#include <iostream>
using namespace std;
enum Rating{G, PG, PG13, R, X};

struct Movie{
  string movieTitle;
  int year;
  Rating movieRating;
};

string getRating(Rating rating);
void displayMovie(Movie movie);

int main(){
  cout << "Favorite Movies!" << endl;
  Movie favorite = {"Princess Bride", 1987, PG};
  displayMovie(favorite);
}

void displayMovie(Movie movie){
  cout << movie.movieTitle << ", " << movie.year << ", " << getRating(movie.movieRating) << endl;
}

string getRating(Rating rating){
  switch(rating){
    case G: return "G";
    case PG: return "PG";
    case PG13: return "PG13";
    case R: return "R";
    case X: return "X";
    default: return "";
  }
}
