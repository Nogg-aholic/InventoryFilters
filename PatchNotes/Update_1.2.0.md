Partial multiplayer and SML3.7/server support. Code cleanup. Config option to turn off the filter picker for people with absurd inventory sizes.




This update brought to you by Robb.
If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- Partial multiplayer support
  - Previously, hosts could configure filters, but clients would see no filtering options
  - Now, clients can see and configure filters, but clients must modify at least one filter in an inventory after joining a session before they can "see" the rest of that inventory's filters. Not sure how to fix this
- Partial SML3.7/server support
  - See above
- Config option: Enable Filter Picker (default true)
  - When checked, it's possible to assign new filters by right clicking on inventory slots as usual.
  - When unchecked, this feature is disabled, but existing filters will continue to work.
  - Consider changing this if you have too many inventory slots or are working with buildings with large inventories to avoid lag.
