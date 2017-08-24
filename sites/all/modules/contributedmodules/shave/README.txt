Shave Module for Drupal

Official Project Page: https://www.drupal.org/project/shave

## Project Description:

The Shave for Drupal module provides integration with the Shave Library. Shave (https://github.com/dollarshaveclub/shave) is javascript plugin that truncates text to fit within a html element based on a set max-height. A demo can be viewed at: https://dollarshaveclub.github.io/shave/

## Installation:

Before enabling and installing this module, Download shave plugin from https://github.com/dollarshaveclub/shave into the libraries directory and rename folder to "shave"

## Usage

1. Text formatter called "Shave Formatter" can be used on node display, views, panels, etc. to set the height you wish to shave elements to. That way you can select format on textfield, textarea etc with a size and it will shave content according to that.
2. Shaver classes on elements like this: . That way you can add classes to fields "shave-formatter shave-format-30" like this and it will shave that container text to appropriate size.
