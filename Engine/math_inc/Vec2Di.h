#pragma once
/*
                                           _   _
     /\                                   | \ | |
    /  \   _ __ ___  _ __ ___   __ _ _ __ |  \| | __ _ ___ ___  ___ _ __
   / /\ \ | '_ ` _ \| '_ ` _ \ / _` | '__|| . ` |/ _` / __/ __|/ _ \ '__|
  / ____ \| | | | | | | | | | | (_| | |   | |\  | (_| \__ \__ \  __/ |
 /_/    \_\_| |_| |_|_| |_| |_|\__,_|_|   |_| \_|\__,_|___/___/\___|_|

*/

namespace am 
{
    namespace math 
    {
        class Vec2Di
        {
        public:
            Vec2Di();

            Vec2Di(int x1, int x2);

            Vec2Di(const Vec2Di& another);


        private:
            int x1;
            int x2;
        };
    }
}
