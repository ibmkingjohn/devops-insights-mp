<?php

/**
 * @author shaouy
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php

 if(arg(0) != "create_match" && arg(0) != "auto_match" && arg(0) != "unmatch" && arg(0) != "dashboard")
 {
                    $arg = arg(0).'/'.arg(1);
                }else
                {
                    $arg = arg(0);
                }

                    $FilterTidUrl = url($arg.'/'.$row->tid, array('absolute' => TRUE));
                    $ViewfilterURL = rawurldecode($FilterTidUrl);
                        
  print render(l(($row->taxonomy_term_data_name),$ViewfilterURL));
 
?>
