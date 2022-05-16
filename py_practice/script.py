# coding: UTF-8
from itertools import count
import random

print('チーム名入力(終了する場合「終了」を入力)')

teams = []

for num in count():
    team = input('{}: '.format(num + 1))

    if team == '終了':
        break

    teams.append(team)

random.shuffle(teams)

print('結果↓')
for i, team in enumerate(teams, 1):
    print('{}: {}'.format(i, team))

