/*
 * Copyright (C) 2022 Smirnov Vladimir / mapron1@gmail.com
 * SPDX-License-Identifier: MIT
 * See LICENSE file for details.
 */
#pragma once

#include "CommonTypes.hpp"

namespace D2ModGen {

bool readJsonFile(const QString& file, QJsonDocument& data);
bool writeJsonFile(const QString& file, const QJsonDocument& data, bool escape = false);

inline QString ensureTrailingSlash(QString path)
{
    if (path.isEmpty())
        return {};

    const bool hasSlash = path.endsWith("\\") || path.endsWith("/");
    if (!hasSlash)
        path += "/";
    return path;
}

}
