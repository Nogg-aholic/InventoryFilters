# Inventory Filters

This mod allows you to set filters on any Inventory Slot
by clicking with the Right-Mouse Button on an empty Inventory-Slot.
A Popup will appear with which you can configure an item to set as that slot's filter.

You can keep applying the same filter to multiple slots
by right clicking them, or right click dragging, while the popup is open.

This works on any inventory slot -
personal storage boxes, your player inventory, vehicles, etc.

This mod uses the base game's slot filter mechanic,
which means that your filters will persist after the mod is uninstalled.
You can also, under some circumstances, edit existing filters that the base game uses, which could probably cause some problems, so be careful.

This mod was started with [Drejn](https://ficsit.app/user/9i28T65xuTXzSs), who worked on the initial implementation!

**Report Bugs here** -> [Nog's Mods Discord](https://discord.gg/nakafUdRfj)

_This mod is currently being maintained by Robb#6731. Contact him if you want up to date source code._

## Uses

- Restrict certain items from entering vehicles at dropoff stations
- Keep your personal storage crates even more organized
- Setting slot filters allows tighter control over [Inserters](https://ficsit.app/mod/C5jf5WDq7cZBtw) and how many items they are allowed to put into containers
- Use Slot Filters to tell [Logistic Modules](https://ficsit.app/mod/AEr7ASfJHWpnhL) that a container is a valid item destination even when it has no items stored inside - useful for making "dropoff chests" or AWESOME sink feeders.
- More!

<video controls="" width="720" height="405">
  <source src="https://cdn.discordapp.com/attachments/456109329456562187/1010260591887257600/FactoryGame-Win64-Shipping_2SVeYuIVmX.mp4" autoplay="false" controls="true" type="video/mp4">
</video>

![Tooltip](https://i.imgur.com/Tls6hrZ.png)

## Regarding Sorting

If you put Slot Filters on containers
(like storage boxes, or your player inventory)
and try to Sort them,
the base game Sorting method does not know how to handle the filters,
and can delete your items!
Even though the mod uses the base-game filtering mechanic,
the base game does not expect these fields to be sorted.
It is not possible to distinguish between a sorted slot the game uses
(ex. machine output slots)
or one you set up yourself with the mod.

By default, sort buttons will be disabled when a filtered slot is detected.

- Don't like this safety feature? Turn off the safety in the mod configs. Pick between:
  - "Prevent" (default, disable sorting and show an explanation tooltip)
    ![PreventMode](https://i.imgur.com/nFeXKR9.png)
  - "Warn" (show a warning symbol and explanation tooltip, but still allow you to sort)
    ![WarnMode](https://i.imgur.com/yIk9TaF.png)
  - "Allow Anyways" (no warnings of any sort, allowed to sort)
