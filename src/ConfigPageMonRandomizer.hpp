/*
 * Copyright (C) 2022 Smirnov Vladimir / mapron1@gmail.com
 * SPDX-License-Identifier: MIT
 * See LICENSE file for details.
 */
#pragma once
#include "ConfigPageAbstract.hpp"

class ConfigPageMonRandomizer : public ConfigPageAbstract {
public:
    ConfigPageMonRandomizer(QWidget* parent);

    // IConfigPage interface
public:
    QString caption() const override
    {
        return "Monster Randomizer";
    }
    QString settingKey() const override
    {
        return "monRandomizer";
    }
    JsonFileSet extraFiles() const override;
    KeySet generate(GenOutput& output, QRandomGenerator& rng, const GenerationEnvironment& env) const override;
};
