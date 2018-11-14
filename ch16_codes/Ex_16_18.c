enum Piece {EMPTY, PAWN, KNIGHT,BISHOP, ROOK,QUEEN, KING};
enum Color {B, W};

struct Square {
    enum Piece p;
    enum Color c;
};


struct Square board[8][8] = {
                             {{ROOK, B}, {KNIGHT, B},{BISHOP, B},{QUEEN, B},
                              {KING, B}, {BISHOP, B},{KNIGHT, B},{ROOK,  B}},
                             {{PAWN, B}, {PAWN,   B},{PAWN,   B},{PAWN,  B},
                              {PAWN, B}, {PAWN,   B},{PAWN,   B},{PAWN,  B}},
                             {{EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, 
                              {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}},
                             {{EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, 
                              {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}},
                             {{EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, 
                              {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}},
                             {{EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, 
                              {EMPTY,B}, {EMPTY,B}, {EMPTY,B}, {EMPTY,B}},
                             {{PAWN, W}, {PAWN,   W},{PAWN,   W},{PAWN,  W},
                              {PAWN, W}, {PAWN,   W},{PAWN,   W},{PAWN,  W}},
                             {{ROOK, W}, {KNIGHT, W},{BISHOP, W},{QUEEN, W},
                              {KING, W}, {BISHOP, W},{KNIGHT, W},{ROOK,  W}}};


