//
// Created by skyzcyou on 1/24/24.
//

#include "SimpleStylePlugin.h"

#include "SimpleStyle.h"

QStringList SimpleStylePlugin::keys() const {
    return {"SimpleStyle"};
}

QStyle* SimpleStylePlugin::create(const QString&key) {
    if (key.toLower() == "simplestyle") {
        return new SimpleStyle;
    }
    return nullptr;
}
