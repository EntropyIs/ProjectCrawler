# Project Crawler.
## Developers.
J.P.Galovic - 6819710

## Class Structure and Object Definitions.
### Model
#### Identifiable Object
The majority of the objects in the engine need to be identifiable, this class forms the base for a majority of the objects defined in this engine.

_Public Methods_
- IdentifiableObject(identifier) : Class constructor, takes either string or vector of strings for identifier.
- AreYou(identifier) : Determines if given identifier is used to identify object.
- Identity() : Fetches the default identity of the object.
- AddIdentifier(identifier) : Adds identifier to the object.

#### Game Object
Base class for all GameObjects, Child class of Identifiable Object. this class helps define all objects that can be used within the game world.

_Public Methods_
- GameObject(itentifier, name, description) : Class constructor, takes either string or vector of strings for identifier, and strings for name and description.
- Name() : Fetches name of game object.
- Description() : Fetches short description of game object. Name (Identifier). _Can be overidden._
- FullDescription() : Fetches long description of game object. _Can be overridden._

#### Item
Base class for all Items.

_Public Methods_
- Item()(itentifier, name, description) : Class constructor, takes either string or vector of strings for identifier, and strings for name and description.

#### Inventory
Container designed to hold Items.

_Public Methods_
- Inventory() : Class Constructor, contructs empty inventory.
- HasItem(identifier) : Determines if item is contained within inventory.
- Put(item) : Puts item in inventory, item is passed as refernce.
- Take(identifier) : Takes item from inventory (removes).
- Fetch(itentifier) : Fetches item from inventory (does not remove).
- ItemList() : Generates list of items contained within inventory.

#### Player
Player class, defines user controlled game object.

_Public Methods_
- Player(name, description) : Class constructor, takes strings for name and description.
- Locate(identifier) : Locates a game object with given identifier, searches in self and inventory.
- FullDescription() : Long Description for player, "_You are_ name _, you are carrying:_ items in inventory"
- Inventory() : Accessor for players inventory.

## Changelog.
_v0.0.1_
- Implement Identifiable Object Class.
- Implement Identifiable Object Test Cases.

_v0.0.2_
- Implement Game Object Class.
- Implement Item Class.
- Implement Item Test Cases.
- Implement Inventory Class.
- Implement Inventory Test Cases.
- Implement Player Class.
- Implement Player Test Cases.