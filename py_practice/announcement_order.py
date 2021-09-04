import random

teams = []
i = 1

while True:
  team = input(str(i) + ", チーム名を入力(endで終了): ")

  if team == "end":
    break;
  
  teams.append(team)
  i += 1

random.shuffle(teams)

for i, team in enumerate(teams):
  print(str(i + 1) + ": " + team)

