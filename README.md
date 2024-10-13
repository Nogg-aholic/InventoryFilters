# Inventory Filters

_Multiplayer compatible!_

This mod allows you to set filters on any inventory slot
by clicking with the Right-Mouse Button on an empty slot.
A popup will appear with which you can configure an item to set as that slot's filter.

<!-- markdownlint-disable MD033 -->
<video controls="" width="720" height="405">
  <source src="https://github.com/Nogg-aholic/InventoryFilters/raw/master/ModpageResources/DemoVideo.mp4" autoplay="false" controls="true" type="video/mp4">
</video>

You can keep applying the same filter to multiple slots
by right clicking them, or right click dragging, while the popup is open.
This works on basically all regular inventory slots -
personal storage boxes, your player inventory, vehicles, etc.

The mod uses the base game's slot filter mechanic,
which means that your filters will persist after the mod is uninstalled.
You can also, under some circumstances, edit existing filters that the base game uses, which could probably cause some problems, so be careful.

This mod was started with [Drejn](https://ficsit.app/user/9i28T65xuTXzSs), who worked on the initial implementation!

**Report Bugs here** -> [Nog & Robb's Mods Discord](https://discord.gg/nakafUdRfj)

_This mod is currently being maintained by `robb4` (Discord)._
_If you enjoy my work, please consider donating to my [completely optional tip jar](https://ko-fi.com/robb4)._

## Uses

- Restrict certain items from entering vehicles at dropoff stations
- Keep your personal storage crates even more organized
- Setting slot filters allows tighter control over [Inserters](https://ficsit.app/mod/C5jf5WDq7cZBtw) and how many items they are allowed to put into containers
- Use Slot Filters to tell [Logistic Modules](https://ficsit.app/mod/AEr7ASfJHWpnhL) that a container is a valid item destination even when it has no items stored inside - useful for making "dropoff chests" or AWESOME sink feeders.
- More!

![Tooltip](https://i.imgur.com/Tls6hrZ.png)

## Known Bugs

- Multiplayer clients must modify at least one filter in an inventory after joining a session before they can "see" the rest of that inventory's filters

## Regarding Sorting

The base game's inventory sorting method is not consicous of slot filters.
This mod relies upon the [Enhanced Sorting](https://ficsit.app/mod/EnhancedSorting) mod to remedy this.
