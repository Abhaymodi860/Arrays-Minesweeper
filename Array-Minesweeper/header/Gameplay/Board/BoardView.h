#pragma once
#include "../../header/UI/UIElement/ImageView.h"

namespace Gameplay
{
    namespace Board
    {
        class BoardController;
        class ImageView;

        class BoardView
        {
        private:
            BoardController* board_controller;
            ImageView* background_image;
            ImageView* board_image;

            const float background_alpha = 85.f;
            const float board_width = 866.f;
            const float board_height = 1080.f;
            const float board_width_offset = 115.f;
            const float board_height_offset = 329.f;

            void initializeBackgroundImage();
            void initializeBoardImage();

        public:
            BoardView(BoardController* controller);
            ~BoardView();

            void initialize();
            void update();
            void render();

            float getCellWidth();
            float getCellHeight();

        };
    }
}