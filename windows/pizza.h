//  Copyright (c) 2023 Antoine Tran Tan
//

#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <iostream>

typedef enum
{
    fromage,
    vegetarienne,
    fruits_de_mer
} type_pizza;

class pizza
{
public:
    void cuire();
    void couper();
    void emballer();

    virtual std::string get_name() = 0;
    virtual std::string get_ingredients() = 0;
};

class pizza_fromage_brest : public pizza
{
public:
    std::string get_name() override;
    std::string get_ingredients() override;
};

class pizza_vegetarienne_brest : public pizza
{
public:
    std::string get_name() override;
    std::string get_ingredients() override;
};

class pizza_fruits_de_mer_brest : public pizza
{
public:
    std::string get_name() override;
    std::string get_ingredients() override;
};

class pizza_fromage_strasbourg : public pizza
{
public:
    std::string get_name() override;
    std::string get_ingredients() override;
};

class pizza_vegetarienne_strasbourg : public pizza
{
public:
    std::string get_name() override;
    std::string get_ingredients() override;
};

class pizza_fruits_de_mer_strasbourg : public pizza
{
public:
    std::string get_name() override;
    std::string get_ingredients() override;
};

#endif // PIZZA_H
