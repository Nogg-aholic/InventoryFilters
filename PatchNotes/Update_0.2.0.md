Update 5 support. Configurable safety to prevent item deletion when sorting. This update brought to you by Robb#6731




## New Stuff

- 'Sorting Safety' feature
  - If you put Slot Filters on containers
    (like storage boxes, or your player inventory)
    and try to Sort them,
    the base game Sorting method does not know how to handle the filters,
    and can delete your items!
  - Now, by default, sort buttons will be disabled when a filtered slot is detected.
  - Even though the mod uses the base-game filtering mechanic,
    the base game does not expect these fields to be sorted.
    It is not possible to distinguish between a sorted slot the game uses
    (ex. machine output slots)
    or one you set up yourself with the mod.
  - Don't like this safety feature? Turn off the safety in the mod configs. Pick between:
    - "Prevent" (default, disable sorting and show an explanation tooltip)
      ![PreventMode](https://i.imgur.com/nFeXKR9.png)
    - "Warn" (show a warning symbol and explanation tooltip, but still allow you to sort)
      ![WarnMode](https://i.imgur.com/yIk9TaF.png)
    - "Allow Anyways" (no warnings of any sort, allowed to sort)

## Bugfixes

- The new 'Sorting Safety' feature makes it impossible to accidentally delete items by sorting containers with filters. Original bug details [here](https://i.imgur.com/PiscCdj.png).
  - If you switch to Warn or Allow Anyways in the config, item deletion will be possible.
