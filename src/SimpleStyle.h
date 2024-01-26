//
// Created by skyzcyou on 1/24/24.
//

#ifndef SIMPLESTYLE_H
#define SIMPLESTYLE_H
#include <QProxyStyle>

class SimpleStyle : public QProxyStyle
{
    Q_OBJECT
public:
    SimpleStyle() = default;
    void polish(QPalette &palette) override;
};

#endif //SIMPLESTYLE_H
