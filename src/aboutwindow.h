//Dummy testing
//Dummy testing 2
//Dummy testing 3
/*
 * Copyright (C) 2016 Luiz Carlos Vieira (http://www.luiz.vieira.nom.br)
 *
 * This file is part of FLAT.
 *
 * FLAT is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FLAT is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QDialog>

namespace Ui
{
    class AboutWindow;
}

namespace ft
{
    /**
     * Form class used to display the about dialog box.
     */
    class AboutWindow : public QDialog
    {
        Q_OBJECT

    public:
        /**
         * Class constructor.
         * @param pParent QWidget with the window parent.
         */
        explicit AboutWindow(QWidget *pParent = 0);

        /**
         * Class destructor
         */
        virtual ~AboutWindow();

    private:
        /** Instance of the ui for GUI element access. */
        Ui::AboutWindow *ui;
    };
}

#endif // ABOUTWINDOW_H
