from pyomo.environ import *
from pyomo.opt import SolverFactory

Model = ConcreteModel("Sample")


Model.x1 = Var(within=NonNegativeReals)
Model.x2 = Var(within=NonNegativeReals)
Model.x3 = Var(within=NonNegativeReals)


def const_1(model):
    return 2 * Model.x1 + Model.x2 + Model.x3 <= 60


def const_2(model):
    return Model.x1 + 2 * Model.x2 + Model.x3 <= 60


def const_3(model):
    return Model.x3 <= 30


Model.const_1 = Constraint(rule=const_1)
Model.const_2 = Constraint(rule=const_2)
Model.const_3 = Constraint(rule=const_3)


def objective(model):
    return 15 * Model.x1 + 18 * Model.x2 + 30 * Model.x3


Model.value = Objective(rule=objective, sense=maximize)

opt = SolverFactory("scipampl")
result = opt.solve(Model, tee=True)
Model.display()

